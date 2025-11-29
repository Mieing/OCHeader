@class NSString, NSArray;
@protocol IESLiveModule, IESLiveComponentAttacher;

@interface IESLiveComponentDiffConfig : NSObject

@property (copy, nonatomic) NSString *outerRole;
@property (copy, nonatomic) NSArray *outerComponents;
@property (retain, nonatomic) id<IESLiveComponentAttacher> outerAttacher;
@property (retain, nonatomic) id<IESLiveModule> outerModule;
@property (nonatomic) BOOL templateMode;
@property (retain, nonatomic) NSArray *blockComponentList;
@property (nonatomic) BOOL loopSetCommonMode;

- (void).cxx_destruct;

@end
