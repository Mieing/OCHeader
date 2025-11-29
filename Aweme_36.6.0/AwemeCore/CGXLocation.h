@class NSString, CGXLocationModuleBridge;
@protocol XPlayLocationDelegate;

@interface CGXLocation : CGObject <CGXLocationProtocol, XPlayLocationProtocol>

@property (weak, nonatomic) CGXLocationModuleBridge *locationModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayLocationDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

@end
