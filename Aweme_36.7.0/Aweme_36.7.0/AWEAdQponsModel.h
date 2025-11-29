@class NSString, NSNumber;

@interface AWEAdQponsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *qponLabel;
@property (copy, nonatomic) NSString *qponText;
@property (retain, nonatomic) NSNumber *showTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
