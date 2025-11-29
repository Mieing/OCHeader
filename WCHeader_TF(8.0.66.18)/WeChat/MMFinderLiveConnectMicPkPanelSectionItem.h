@class NSString, MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicPkPanelSectionItem : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long teamNumber;
@property (nonatomic) unsigned long long headerButtonType;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUser;
@property (retain, nonatomic) NSString *headerTitle;

- (void).cxx_destruct;

@end
