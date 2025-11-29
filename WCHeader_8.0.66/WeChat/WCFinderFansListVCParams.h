@class WCFinderContact;

@interface WCFinderFansListVCParams : NSObject

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long totalFansCount;

+ (id)paramsWithContact:(id)a0;

- (void).cxx_destruct;

@end
