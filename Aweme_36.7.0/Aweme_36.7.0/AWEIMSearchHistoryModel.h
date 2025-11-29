@class NSString, NSArray;

@interface AWEIMSearchHistoryModel : NSObject <AWEIMPrimaryKey>

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (nonatomic) BOOL useSquareAvatar;
@property (nonatomic) BOOL online;
@property (nonatomic) BOOL isFormat;
@property (nonatomic) BOOL shouldFilterInSeach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
