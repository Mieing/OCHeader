@class NSMutableSet, NSMutableDictionary;

@interface BDUGLuckyActivityStageDataChangeModel : NSObject

@property (nonatomic) BOOL hasDiff;
@property (retain, nonatomic) NSMutableSet *entryIdSet;
@property (retain, nonatomic) NSMutableDictionary *originData;
@property (retain, nonatomic) NSMutableDictionary *updateData;

- (void).cxx_destruct;

@end
