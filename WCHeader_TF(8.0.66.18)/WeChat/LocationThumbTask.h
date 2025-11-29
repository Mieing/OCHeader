@class NSString, UIView;

@interface LocationThumbTask : MMObject

@property (retain, nonatomic) NSString *tmpThumbID;
@property (nonatomic) double extraHeight;
@property (copy, nonatomic) NSString *initialChatname;
@property (copy, nonatomic) NSString *chatname;
@property (nonatomic) unsigned int msgLocalID;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) struct CGSize { double width; double height; } thumbSize;
@property (nonatomic) struct CGPoint { double x; double y; } mapPinOffset;
@property (nonatomic) double mapScale;
@property (nonatomic) BOOL isSender;
@property (nonatomic) BOOL disableMask;
@property (retain, nonatomic) UIView *extraView;
@property (nonatomic) BOOL isInDarkMode;
@property (copy, nonatomic) NSString *buildingId;
@property (copy, nonatomic) NSString *floorName;

+ (id)getThumbIDWithChatName:(id)a0 MsgLocalID:(unsigned int)a1;

- (id)init;
- (id)getThumbID;
- (void).cxx_destruct;

@end
