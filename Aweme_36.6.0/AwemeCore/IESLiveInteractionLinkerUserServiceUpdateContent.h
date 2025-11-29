@class NSArray, IESLiveClientUIInfo, GPBInt64ObjectDictionary;

@interface IESLiveInteractionLinkerUserServiceUpdateContent : NSObject

@property (copy, nonatomic) NSArray *linkedUsersArray;
@property (retain, nonatomic) GPBInt64ObjectDictionary *otherLinkerContent;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUIInfo;
@property (nonatomic) BOOL decodeExtra;
@property (nonatomic) unsigned long long version;

- (void)updateWithUserArray:(id)a0 otherLinkerContent:(id)a1 needToDecodeExtra:(BOOL)a2 version:(unsigned long long)a3 clientUIInfo:(id)a4;
- (void).cxx_destruct;
- (void)clean;

@end
