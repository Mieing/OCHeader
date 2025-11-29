@class NSString;

@interface AWEECMallSFSearchResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *pID;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *imgURL;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
