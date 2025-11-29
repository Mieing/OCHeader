@class NSString, NSMutableDictionary, AWEMusicDSPEventModel, NSDictionary;

@interface AWEMiniLunaDiversionEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (copy, nonatomic) NSString *fromAction;
@property (copy, nonatomic) NSString *directType;
@property (copy, nonatomic) NSDictionary *customParams;

+ (id)showEvent;

- (void).cxx_destruct;
- (void)report;

@end
