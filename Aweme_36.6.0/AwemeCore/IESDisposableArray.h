@class NSArray, NSString;

@interface IESDisposableArray : NSObject <IESDisposable>

@property (retain) NSArray *disposables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
