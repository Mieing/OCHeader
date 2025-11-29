@class NSString, NSMutableArray;

@interface WCSessionUBAUnitConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableArray *businessParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pageName;
+ (void)PBArrayAdd_businessParams;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithPageName:(id)a0;
- (id)toString;
- (void).cxx_destruct;

@end
