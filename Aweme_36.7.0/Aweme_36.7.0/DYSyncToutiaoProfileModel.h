@class NSString, NSArray;

@interface DYSyncToutiaoProfileModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL isSync;
@property (nonatomic) BOOL canShowAlert;
@property (copy, nonatomic) NSArray *recommendNameList;
@property (copy, nonatomic) NSString *syncTicket;
@property (copy, nonatomic) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
