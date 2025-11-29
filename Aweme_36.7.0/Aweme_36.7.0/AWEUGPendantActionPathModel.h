@class NSString;

@interface AWEUGPendantActionPathModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskInfoPath;
@property (copy, nonatomic) NSString *taskDonePath;
@property (copy, nonatomic) NSString *closePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
