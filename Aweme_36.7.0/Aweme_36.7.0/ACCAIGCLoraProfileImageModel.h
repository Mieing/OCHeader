@class NSString, UIImage;

@interface ACCAIGCLoraProfileImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *originaluri;
@property (copy, nonatomic) UIImage *profileImage;
@property (copy, nonatomic) NSString *loraId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
