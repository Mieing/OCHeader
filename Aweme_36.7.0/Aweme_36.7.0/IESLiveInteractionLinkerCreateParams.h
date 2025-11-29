@class NSString, NSDictionary, IESLiveInteractionLayout;

@interface IESLiveInteractionLinkerCreateParams : IESLiveInteractionLinkerParams

@property (nonatomic) BOOL joinChannelManually;
@property (nonatomic) BOOL autoSelectLayoutFromServer;
@property (nonatomic) BOOL initBySchema;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) unsigned long long initSource;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSDictionary *createExtraParams;

- (void).cxx_destruct;

@end
