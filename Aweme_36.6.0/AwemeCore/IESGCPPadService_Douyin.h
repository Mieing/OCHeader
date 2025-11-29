@class NSString;

@interface IESGCPPadService_Douyin : NSObject <IESGCPPadService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)fetchScreenAvailableHeight;
- (double)fetchScreenAvailableWidth;

@end
