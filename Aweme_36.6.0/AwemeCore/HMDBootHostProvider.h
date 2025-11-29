@class NSString;

@interface HMDBootHostProvider : NSObject <HMDURLHostProvider> {
    NSString *_host;
    BOOL _encrypt;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
