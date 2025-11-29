@class NSString, NSDictionary;

@interface BDTuringTVModel : BDTuringVerifyModel <BDTuringVerifyModelCreator>

@property (copy, nonatomic) NSString *handlerName;
@property (copy, nonatomic) NSString *ui_type;
@property (copy, nonatomic) NSDictionary *mDecision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
