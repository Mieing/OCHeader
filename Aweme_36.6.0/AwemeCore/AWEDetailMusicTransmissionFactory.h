@interface AWEDetailMusicTransmissionFactory : NSObject

+ (void)configLastPageTransmission:(id)a0 toNode:(id)a1;
+ (void)configRelatedLastPageTransmission:(id)a0 toNode:(id)a1;
+ (BOOL)shouldTransmissionContinueWithDataContext:(id)a0 context:(id)a1;
+ (void)attachDetailPropTransmission:(id)a0 toNode:(id)a1;
+ (void)attachDetailRelatedPropTransmission:(id)a0 toNode:(id)a1;

@end
