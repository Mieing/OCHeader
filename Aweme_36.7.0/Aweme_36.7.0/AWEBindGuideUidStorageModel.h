@class NSString, NSDate;

@interface AWEBindGuideUidStorageModel : AWEBaseApiModel <NSCoding, MTLJSONSerializing>

@property (retain, nonatomic) NSDate *lastShowDate;
@property (retain, nonatomic) NSDate *lastRedDotDismissDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
