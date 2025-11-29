@class NSString;

@interface SearchCgiGuideVertEntry : NSObject

@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL needHideKeyBoard;
@property (nonatomic) BOOL needUpdateLocation;

- (void).cxx_destruct;

@end
