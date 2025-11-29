@class NSString, NSDictionary, IESECSKUParamsModel, NSNumber;
@protocol IESECSKUViewDelegate;

@interface IESECYataSKUContext : NSObject <IESECSKUContextProtocol>

@property (retain, nonatomic) NSDictionary *schemaParams;
@property (retain, nonatomic) IESECSKUParamsModel *paramsModel;
@property (retain, nonatomic) NSNumber *heightPercent;
@property (retain, nonatomic) NSString *SKUSessionID;
@property (retain, nonatomic) NSString *skuUniqueID;
@property (nonatomic) BOOL fromNative;
@property (weak, nonatomic) id<IESECSKUViewDelegate> skuDelegate;
@property (retain, nonatomic) id<IESECSKUViewDelegate> skuSchemaDelegate;
@property (nonatomic) BOOL schemaOptimize;
@property (nonatomic) BOOL containerOpt;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showFrame;
@property (retain, nonatomic) NSString *skuSchema;
@property (readonly, nonatomic) NSString *detailUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSliceXFitPhoneWidth;
+ (double)contentScale;

- (id)initWithSchemaParams:(id)a0;
- (void).cxx_destruct;

@end
