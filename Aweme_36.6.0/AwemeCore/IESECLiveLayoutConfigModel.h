@class NSNumber, NSString;

@interface IESECLiveLayoutConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (retain, nonatomic) NSNumber *leftMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
