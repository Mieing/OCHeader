@class NSString, NSDictionary, NSNumber;

@interface AWELiveLocalLifeOriginalAdCardModel : AWEOriginalAdCardModel <IESLLLiveOriginalAdCardModelService>

@property (copy, nonatomic) NSString *adStatusCode;
@property (copy, nonatomic) NSString *cardURL;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) long long cardType;
@property (nonatomic) long long showSeconds;
@property (retain, nonatomic) NSNumber *showDuration;
@property (nonatomic) long long cardStyle;
@property (nonatomic) long long preloadType;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
