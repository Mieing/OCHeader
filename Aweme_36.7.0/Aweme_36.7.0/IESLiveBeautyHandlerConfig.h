@class NSString;
@protocol IESLiveBeautyHandlerDelegate;

@interface IESLiveBeautyHandlerConfig : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needShowReset;
@property (nonatomic) BOOL needRedDot;
@property (nonatomic) BOOL shouldRenderOnResourceDownloaded;
@property (nonatomic) unsigned long long trackType;
@property (weak, nonatomic) id<IESLiveBeautyHandlerDelegate> delegate;
@property (retain, nonatomic) NSString *prefixKey;
@property (nonatomic) long long itemCornerRadius;

- (void).cxx_destruct;
- (id)init;

@end
