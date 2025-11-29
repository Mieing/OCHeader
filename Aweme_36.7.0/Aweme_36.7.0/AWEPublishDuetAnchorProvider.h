@class NSString;

@interface AWEPublishDuetAnchorProvider : NSObject <ACCPublishAnchorProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAnchorInfoIfNeeded:(id)a0;

@end
