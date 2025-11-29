@class NSString;
@protocol XPlayLocationDelegate;

@interface CGLocation : CGObject <XPlayLocationProtocol>

@property (weak, nonatomic) id<XPlayLocationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

@end
