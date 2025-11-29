@class NSString, NSDictionary, IESECTracker;

@interface IESECWindowAfterLiveCardProvider : NSObject <IESECWindowAfterLiveCardProviderService> {
    IESECTracker *_tracker;
}

@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSDictionary *liveGuideStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeProviderWithTracker:(id)a0;

@end
