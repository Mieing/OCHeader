@class NSDictionary, NSString;

@interface QPointEventMarker : InnerQMarker {
    BOOL _avoidOtherAnnotations;
    int _geotype;
    int _markerID;
    NSString *_iconPath;
}

@property (retain, nonatomic) NSDictionary *eventInfo;

- (void)setGeotype:(int)a0;
- (int)geotype;
- (void)setMarkerID:(int)a0;
- (int)markerID;
- (id)iconPath;
- (void)setIconPath:(id)a0;
- (BOOL)avoidOtherAnnotations;
- (void)setAvoidOtherAnnotations:(BOOL)a0;
- (void).cxx_destruct;

@end
