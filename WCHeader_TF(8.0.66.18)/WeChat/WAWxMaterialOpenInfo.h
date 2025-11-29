@class NSString, NSSet;

@interface WAWxMaterialOpenInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *enterPath;
@property (nonatomic) unsigned long long debugType;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSString *materialPath;
@property (retain, nonatomic) NSString *materialName;
@property (nonatomic) unsigned long long materialSize;
@property (nonatomic) unsigned int materialScene;
@property (retain, nonatomic) NSString *msgContent;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned long long msgLocalId;
@property (nonatomic) unsigned long long msgTimeStamp;
@property (retain, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned long long chatType;
@property (retain, nonatomic) NSSet *suffixSet;

- (void).cxx_destruct;

@end
