@class NSString, NSDictionary, NSData, IESFalconStatModel;

@interface BDPreloadCachedResponse : NSObject <IESFalconMetaData, BDPWebViewPrefetchResult, NSCoding>

@property (retain, nonatomic) NSData *falconData;
@property (retain, nonatomic) IESFalconStatModel *statModel;
@property (readonly, nonatomic) NSDictionary *allHeaderFields;
@property (readonly, nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (retain, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) double saveTime;
@property (nonatomic) double cacheDuration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
