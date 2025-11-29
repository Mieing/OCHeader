@class AWERecordAuthViewHolder, NSString;
@protocol ACCRecorderViewContainer;

@interface AWEShowAuthLayoutAction : NSObject <FPLayoutAction>

@property (retain, nonatomic) AWERecordAuthViewHolder *authViewHolder;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)layoutWithViewContainer:(id)a0 viewHolder:(id)a1;
+ (void)showUploadIn:(id)a0 viewHolder:(id)a1;
+ (void)showDYCodeIn:(id)a0 viewHolder:(id)a1;
+ (void)hideDYCodeIn:(id)a0;

- (void).cxx_destruct;
- (void)layout;

@end
