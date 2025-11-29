@class NSString;

@interface AWELiteBaseApiModel : MTLModel <MTLJSONSerializing>

@property (class, nonatomic) BOOL preventMergePropertyInfiniteLoop;

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorTips;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)mergeAllPropertyKeysWithLogID:(id)a0;
- (void)mergeAllPropertyKeysWithBusinessCode:(long long)a0 businessTips:(id)a1;
- (void).cxx_destruct;

@end
