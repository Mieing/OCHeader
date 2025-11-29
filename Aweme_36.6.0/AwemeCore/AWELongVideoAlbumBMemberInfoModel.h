@class NSString;

@interface AWELongVideoAlbumBMemberInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *scheme;
@property (nonatomic) BOOL hasPaid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
