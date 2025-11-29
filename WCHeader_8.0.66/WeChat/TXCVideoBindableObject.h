@class NSString;
@protocol TXIVideoBindable;

@interface TXCVideoBindableObject : NSObject <TXIVideoBindable>

@property (retain) id<TXIVideoBindable> nextBindable;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) BOOL checkInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
