@class NSString, WCFinderProfileOverviewBaseSectionCtrl;

@interface WCFinderProfileOVSectionIdentifier : NSObject

@property (retain, nonatomic) WCFinderProfileOverviewBaseSectionCtrl *section;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long secType;
@property (nonatomic) BOOL showFooterBtn;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
