@class NSString, IESECURLModel;

@interface IESECTabKitTabStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECURLModel *image;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) id /* block */ imageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
