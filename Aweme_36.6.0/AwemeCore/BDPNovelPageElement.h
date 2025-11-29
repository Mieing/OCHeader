@class NSString, BDPNovelInsertPageCondition;

@interface BDPNovelPageElement : NSObject

@property (copy, nonatomic) NSString *elementId;
@property (retain, nonatomic) BDPNovelInsertPageCondition *insertPageCondition;
@property (nonatomic) BOOL isForceFlowAd;
@property (nonatomic) BOOL isEverBlocked;

- (void).cxx_destruct;
- (void)setCondition:(id)a0;
- (id)condition;

@end
