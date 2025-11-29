@class NSArray, NSString;

@interface CAKViewModelNotifyInfo : NSObject <CAKViewModelNotifyInfoProtocol>

@property (retain, nonatomic) NSArray *changedAssets;
@property (retain, nonatomic) NSArray *currentSelectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInfo:(id)a0 currentSelectedAssets:(id)a1;

- (void).cxx_destruct;

@end
