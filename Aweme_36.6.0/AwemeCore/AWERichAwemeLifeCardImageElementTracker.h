@class NSString;

@interface AWERichAwemeLifeCardImageElementTracker : NSObject <AWEPOILifeCardImageTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLifeCardImageClick:(id)a0 clickType:(long long)a1 model:(id)a2 tabRank:(long long)a3 extraInfo:(id)a4;
+ (void)trackLifeCardImageButtonShow:(id)a0 model:(id)a1 extraInfo:(id)a2;
+ (void)trackLifeCardImageShow:(id)a0 source:(id)a1 model:(id)a2 tabRank:(long long)a3 extraInfo:(id)a4;
+ (BOOL)isSameCity:(id)a0;
+ (id)clickTypeString:(long long)a0;


@end
