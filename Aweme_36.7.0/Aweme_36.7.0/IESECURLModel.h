@class NSString, NSArray, NSNumber;

@interface IESECURLModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *URLList;
@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
