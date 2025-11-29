@class CSJNativeAd, NSString;

@interface CSJDislikeReportor : NSObject <CSJDislikeReportorDelegate>

@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dislikeDidSelected:(id)a0;
- (void)dislikeDidSubmitFeedback:(id)a0;
- (id)initWithNativeAd:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
