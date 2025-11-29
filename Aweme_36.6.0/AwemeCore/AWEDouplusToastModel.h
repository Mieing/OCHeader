@class NSString, NSNumber;

@interface AWEDouplusToastModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long toastId;
@property (nonatomic) long long contentId;
@property (nonatomic) long long toastType;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *redirectUrl;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)douplusToastType;
- (void).cxx_destruct;

@end
