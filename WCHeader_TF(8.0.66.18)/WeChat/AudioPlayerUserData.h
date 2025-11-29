@class CMessageWrap;

@interface AudioPlayerUserData : NSObject

@property unsigned int audioid;
@property int lastRecordTime;
@property (retain) CMessageWrap *msgWrap;

- (void).cxx_destruct;

@end
