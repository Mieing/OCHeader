@class NSString;

@interface BDPDetentionHelper : NSObject {
    BOOL _hasShown;
}

@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *dismissString;
@property (readonly, copy, nonatomic) NSString *resumeString;

- (void)singleTrackerEventForDetentionShow:(id)a0;
- (id)initWithAlertType:(unsigned long long)a0;

@end
