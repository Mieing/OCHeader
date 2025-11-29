@class NSArray, NSString, VNImageRequestHandler;

@interface AWESearchVisionOCRService : NSObject <AWESearchVisionOCRProtocol>

@property (retain, nonatomic) VNImageRequestHandler *requestHandler;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL automaticallyDetectsLanguage;
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) double costTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
