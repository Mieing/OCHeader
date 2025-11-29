@class NSString;
@protocol IESLiveInteractionLinkSessionTrackContextDataSource;

@interface IESLiveInteractionLinkSessionTrackContextImpl : NSObject <IESLiveInteractionLinkSessionTrackContext>

@property (weak, nonatomic) id<IESLiveInteractionLinkSessionTrackContextDataSource> dataSource;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *connectType;
@property (copy, nonatomic) NSString *overType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
