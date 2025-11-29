@class NSString, IESProcessConfig;

@interface IESImgNNProcessor : IESImgProcessBaseImpl <IESImgProcessInterface>

@property (retain, nonatomic) IESProcessConfig *config;
@property (readonly, nonatomic) BOOL isInitFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
