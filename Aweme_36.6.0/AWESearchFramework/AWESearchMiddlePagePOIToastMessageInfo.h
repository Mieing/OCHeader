@interface AWESearchMiddlePagePOIToastMessageInfo : NSObject

@property (nonatomic) BOOL canSendCachedMessage;
@property (nonatomic, getter=isCachedMessageExpired) BOOL cachedMessageExpired;

@end
