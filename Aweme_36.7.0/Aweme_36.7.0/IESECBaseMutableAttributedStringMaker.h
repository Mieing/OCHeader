@class NSMutableArray;

@interface IESECBaseMutableAttributedStringMaker : NSObject

@property (retain, nonatomic) NSMutableArray *generators;
@property (retain, nonatomic) NSMutableArray *openingGroups;
@property (readonly, copy, nonatomic) id /* block */ group;

- (void)addGenerator:(id)a0;
- (void).cxx_destruct;
- (id)enterGroup;
- (id)leaveGroup;
- (id)contentManager;

@end
