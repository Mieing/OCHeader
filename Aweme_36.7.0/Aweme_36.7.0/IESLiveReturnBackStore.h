@class IESLiveEnterRoomAisle, NSArray, NSDictionary, NSString, HTSEventContext, NSNumber, HTSLiveRoom;

@interface IESLiveReturnBackStore : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) unsigned long long path;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) NSArray *vsAvatarURLs;
@property (retain, nonatomic) NSDictionary *vsParams;
@property (nonatomic) BOOL isFIFARoom;
@property (copy, nonatomic) NSString *backFIFARoomTitle;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;

- (BOOL)isVSRoom;
- (void).cxx_destruct;

@end
