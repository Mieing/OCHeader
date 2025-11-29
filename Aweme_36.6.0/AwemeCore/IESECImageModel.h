@class NSString, IESECURLModel, IESECNativeImageModel, IESECBorderConfig;

@interface IESECImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *urlModel;
@property (nonatomic) double roundCorner;
@property (copy, nonatomic) NSString *tintColor;
@property (retain, nonatomic) IESECNativeImageModel *nativeModel;
@property (retain, nonatomic) IESECBorderConfig *border;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
