@class NSString;

@interface IESGCPCGLocationComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, XPlayLocationDelegate>

@property BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
