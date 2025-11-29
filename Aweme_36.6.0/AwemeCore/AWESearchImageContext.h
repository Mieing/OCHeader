@class NSString, AWEAwemeModel;
@protocol AWESearchImageReuseHandlerDelegate;

@interface AWESearchImageContext : NSObject <AWESearchElementReuseContextProtocol>

@property (weak, nonatomic) id<AWESearchImageReuseHandlerDelegate> reuseTarget;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
