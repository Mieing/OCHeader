@class NSString, NSDictionary, NSData, IESFalconStatModel;

@interface IESAdLandingChannelFalconMetaData : NSObject <IESFalconMetaData>

@property (retain, nonatomic) NSData *falconData;
@property (retain, nonatomic) IESFalconStatModel *statModel;
@property (readonly, nonatomic) NSDictionary *allHeaderFields;
@property (readonly, nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
