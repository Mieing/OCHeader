@class NSString, NSDictionary, NSData, IESFalconStatModel;

@interface BDXResourceLoaderPreloadMetaData : NSObject <IESFalconMetaData>

@property (nonatomic) double saveTime;
@property (nonatomic) double cacheDuration;
@property (retain, nonatomic) NSDictionary *allHeaderFields;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSData *falconData;
@property (retain, nonatomic) IESFalconStatModel *statModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
