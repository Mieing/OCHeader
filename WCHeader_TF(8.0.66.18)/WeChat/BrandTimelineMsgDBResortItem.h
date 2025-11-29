@class NSString;

@interface BrandTimelineMsgDBResortItem : NSObject

@property (nonatomic) unsigned long long seqId;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int predict;
@property (nonatomic) BOOL bShowBigPic;
@property (nonatomic) BOOL bHasResorted;
@property (nonatomic) BOOL isDigestBold;
@property (retain, nonatomic) NSString *digestInfoJson;
@property (retain, nonatomic) NSString *digestStrategyInfo;
@property (nonatomic) BOOL reduceGroup;
@property (copy, nonatomic) NSString *recReason;
@property (copy, nonatomic) NSString *resortBuffer;

- (BOOL)isNeedUpdateResortDigestByDBMsg:(id)a0;
- (BOOL)isStringIncludeNil:(id)a0 equalToString:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
