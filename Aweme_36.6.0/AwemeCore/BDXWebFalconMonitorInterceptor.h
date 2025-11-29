@class NSString, BDXWebView;

@interface BDXWebFalconMonitorInterceptor : NSObject <IESFalconMonitorInterceptor>

@property (weak, nonatomic) BDXWebView *container;
@property (copy, nonatomic) NSString *templateURLString;
@property (nonatomic) long long templateResourceFrom;
@property (nonatomic) unsigned long long packageVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
